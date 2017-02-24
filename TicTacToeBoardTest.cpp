/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(TicTacToeBoardTest, sanityCheck)
{
	ASSERT_TRUE(true);
}
TEST(TicTacToeBoardTest, PlacePieceCheck0)

{

	TicTacToeBoard ttt;
	ASSERT_TRUE(ttt.placePiece(1,1));

}



TEST(TicTacToeBoardTest, getPieceCheck0)

{

	TicTacToeBoard ttt;
	ASSERT_TRUE(ttt.getPiece(1,1));

}

/////////

TEST(TicTacToeBoardTest, PlacePieceCheck1)

{

	TicTacToeBoard ttt;
	ASSERT_TRUE(ttt.placePiece(0,1));

}



TEST(TicTacToeBoardTest, getPieceCheck1)

{

	TicTacToeBoard ttt;
	ASSERT_TRUE(ttt.getPiece(0,1));

}

//////

TEST(TicTacToeBoardTest, PlacePieceCheck2)

{

	TicTacToeBoard ttt;	
	ASSERT_FALSE(ttt.placePiece(5,1));

}



TEST(TicTacToeBoardTest, getPieceCheck2)

{

	TicTacToeBoard ttt;	
	ASSERT_FALSE(ttt.getPiece(5,1));

}
