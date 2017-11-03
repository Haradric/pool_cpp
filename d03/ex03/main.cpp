
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int		main( void ) {

	FragTrap	a( "FR4G-TP" );
	ScavTrap	b( "5H4D0W-TP" );
	ClapTrap	c;
	NinjaTrap	d( "MightyNinja" );

	srand(time(NULL));

	a.rangedAttack( "5H4D0W-TP" );
	a.meleeAttack( "5H4D0W-TP" );
	a.takeDamage( 50 );
	a.beRepaired( 50 );
	a.vaulthunter_dot_exe( "5H4D0W-TP" );

	b.rangedAttack( "FR4G-TP" );
	b.meleeAttack( "FR4G-TP" );
	b.takeDamage( 50 );
	b.beRepaired( 50 );
	b.challengeNewcomer( "FR4G-TP" );

	d.ninjaShoebox( a );
	d.ninjaShoebox( b );
	d.ninjaShoebox( c );
	d.ninjaShoebox( d );
}
