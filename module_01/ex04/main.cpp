/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:28:33 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/10/01 12:51:33 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int		openIn( std::ifstream& inFile, std::string file);
int		openOut( std::ofstream& outFile, std::string file );
int		set_setup( std::string file, std::string rem, std::string rep);
void	getInBuffer( std::ifstream& inFile, std::string& inBuffer );
void	replaceStringOutBuffer(std::string inBuffer, std::string& outBuffer,
			std::string rem, std::string rep);
void	setDataOut( std::ofstream& outFile, std::string outBuffer );

int	main( int ac, char** av )
{
	if ( ac != 4 )
	{
		std::cout << "Is need 4 aruments" << std::endl;
		return ( false );
	}

	if ( set_setup( av[1], av[2], av[3] ) == false )
		return ( false );

	return ( true );
}

int	set_setup( std::string file, std::string rem, std::string rep)
{
	std::ifstream	inFile;
	std::ofstream	outFile;
	std::string		inBuffer;
	std::string		outBuffer;

	if ( rem.empty() || rep.empty() )
		return ( false );
	if ( openIn(inFile, file) == false )
		return ( false );

	getInBuffer( inFile, inBuffer );
	replaceStringOutBuffer(inBuffer, outBuffer, rem, rep);
	if ( openOut( outFile, file ) == false )
		return ( false );

	setDataOut( outFile, outBuffer );
	inFile.close();

	return ( true );
}

int	openIn( std::ifstream& inFile, std::string file)
{
	inFile.open( file.c_str(), std::ifstream::in );
	if ( inFile.is_open() == false )
	{
		inFile.close();
		return ( false );
	}

	return ( true );
}

int	openOut( std::ofstream& outFile, std::string file )
{
	file.append( ".replace" );
	outFile.open( file.c_str(), std::ofstream::out | std::ofstream::trunc );
	if ( outFile.is_open() == false )
	{
		outFile.close();
		return ( false );
	}

	return ( true );
}

void	getInBuffer( std::ifstream& inFile, std::string& inBuffer )
{
	std::stringstream bufferRead;
	bufferRead << inFile.rdbuf();
	inBuffer = bufferRead.str();
}

void	replaceStringOutBuffer(std::string inBuffer, std::string& outBuffer,
			std::string rem, std::string rep)
{
	size_t	x;

	while ( inBuffer.find( rem ) != inBuffer.npos )
	{
		x = inBuffer.find( rem );
		outBuffer.append( inBuffer.substr( 0, x ) );
		outBuffer.append( rep );
		inBuffer = inBuffer.substr( x + rem.size(), inBuffer.size() );
	}
	outBuffer.append( inBuffer );
}

void	setDataOut( std::ofstream& outFile, std::string outBuffer )
{
	outFile << outBuffer;
	outFile.close();
}
