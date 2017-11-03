
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main( void ) {

	FragTrap	a( "FR4G-TP" );
	ScavTrap	b( "5H4D0W-TP" );

	srand(time(NULL));

	a.rangedAttack( "5H4D0W-TP" );
	a.meleeAttack( "5H4D0W-TP" );
	a.takeDamage( 90 );
	a.takeDamage( 90 );
	a.beRepaired( 50 );
	a.beRepaired( 150 );
	a.vaulthunter_dot_exe( "5H4D0W-TP" );
	a.vaulthunter_dot_exe( "5H4D0W-TP" );
	a.vaulthunter_dot_exe( "5H4D0W-TP" );
	a.vaulthunter_dot_exe( "5H4D0W-TP" );
	a.vaulthunter_dot_exe( "5H4D0W-TP" );

	b.rangedAttack( "FR4G-TP" );
	b.meleeAttack( "FR4G-TP" );
	b.takeDamage( 90 );
	b.takeDamage( 90 );
	b.beRepaired( 50 );
	b.beRepaired( 150 );
	b.challengeNewcomer( "FR4G-TP" );
	b.challengeNewcomer( "FR4G-TP" );
	b.challengeNewcomer( "FR4G-TP" );
	b.challengeNewcomer( "FR4G-TP" );
	b.challengeNewcomer( "FR4G-TP" );

}