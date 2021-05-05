#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void createTeam(std::string teamName, Zombie** team, std::string *names) {
  ZombieEvent::setZombieType(teamName);
  for (int i = 0; i < 3; i++)
    team[i] = ZombieEvent::newZombie(names[i]);
}

void clearTeam(Zombie** team) {
  for (int i = 0; i < 3; i++)
    delete team[i];
}

void fight(Zombie **team1, Zombie **team2, int round) {
  std::cout << "\nfight round: " << round;
  ZombieEvent::setZombieType("minion");
  for (int i = 0; i < 3; i++) {
    std::cout << '\n';
    Zombie minion = ZombieEvent::randomChump();
    team1[i]->announce();
    team2[i]->announce();
  }
}

int main(void) {
  Zombie* blueTeam[3];
  Zombie* redTeam[3];
  std::string blueZombies[3] = {"Garen", "Rammus", "Viktor"};
  std::string redZombies[3] = {"Aatrox", "Olaf", "Irelia"};
  createTeam("blueTeam", blueTeam, blueZombies);
  createTeam("redTeam", redTeam, redZombies);
  for (int i = 0; i < 2; i++)
    fight(blueTeam, redTeam, i + 1);
  std::cout << "\nEnd of war\n";
  clearTeam(blueTeam);
  clearTeam(redTeam);
}
