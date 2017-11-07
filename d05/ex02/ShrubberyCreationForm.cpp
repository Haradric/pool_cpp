
#include <fstream>

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) {

}

ShrubberyCreationForm::ShrubberyCreationForm( std::string name ) : Form( name, 145, 137 ) {

}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {

}

void ShrubberyCreationForm::execute( Bureaucrat const & executor ) const {

	if ( _execlvl < executor.getGrade() )
		throw GradeTooLowException();
	
	std::ofstream file;
	std::string filename( _name );
	filename += "_shrubbery";
	file.open( filename );
	file << "              _{\\ _{\\{\\/}/}/}__" << std::endl;
	file << "             {/{/\\}{/{/\\}(\\}{/\\} _" << std::endl;
	file << "            {/{/\\}{/{/\\}(_)\\}{/{/\\}_" << std::endl;
	file << "         {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\}/\\}" << std::endl;
	file << "        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}" << std::endl;
	file << "       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}" << std::endl;
	file << "      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}" << std::endl;
	file << "      _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}" << std::endl;
	file << "     {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}" << std::endl;
	file << "      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}" << std::endl;
	file << "       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)" << std::endl;
	file << "      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}" << std::endl;
	file << "       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}" << std::endl;
	file << "         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}" << std::endl;
	file << "          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)" << std::endl;
	file << "            {/{/{\\{\\/}{/{\\{\\{\\(_)/}" << std::endl;
	file << "             {/{\\{\\{\\/}/}{\\{\\}/}" << std::endl;
	file << "              {){/ {\\/}{\\/} \\}\\}" << std::endl;
	file << "              (_)  \\.-'.-/" << std::endl;
	file << "          __...--- |'-.-'| --...__" << std::endl;
	file << "   _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__" << std::endl;
	file << " -\"    ' .  . '    |.'-._| '  . .  '   " << std::endl;
	file << " .  '-  '    .--'  | '-.'|    .  '  . '" << std::endl;
	file << "          ' ..     |'-_.-|" << std::endl;
	file << "  .  '  .       _.-|-._ -|-._  .  '  ." << std::endl;
	file << "              .'   |'- .-|   '." << std::endl;
	file << "  ..-'   ' .  '.   `-._.-´   .'  '  - ." << std::endl;
	file << "   .-' '        '-._______.-'     '  ." << std::endl;
	file << "        .      ~," << std::endl;
	file << "    .       .       .    ' '-." << std::endl;
}
