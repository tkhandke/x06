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
	ASSERT_TRUE(ttt.placePiece(5,1));

}



TEST(TicTacToeBoardTest, getPieceCheck2)

{

	TicTacToeBoard ttt;	
	ASSERT_TRUE(ttt.getPiece(5,1));


}

TEST(TicTacToeBoardTest, CheckClearBoard)

{

	bool temp = true;
	TicTacToeBoard ttt;
	ttt.clearBoard();

	for(int i = 0; i < 3 ; i++ )

	{

		for (int j = 0; j < 3;j++)

		{
                      //board not blank
	              if (ttt.getPiece(i,j) != Blank)
		      {

			temp = false;	
		      }
		}

	}

	ASSERT_TRUE(temp);

}

TEST(TicTacToeBoardTest, checkWinner)

{

  TicTacToeBoard TTT;
  bool checker;

  if(TTT.getWinner() == X || TTT.getWinner() == O)

  {

    checker=true;

  }

  ASSERT_TRUE(checker);

}

TEST(TicTacToeBoardTest, checkPlacePieceToggle)
{
	TicTacToeBoard ttt;
        ASSERT_TRUE(ttt.placePiece(1,1));

}


TEST(TicTacToeBoardTest, placePieceCheck3)

{

	TicTacToeBoard TTT;	

	ASSERT_TRUE(TTT.placePiece(0,0));

}



TEST(TicTacToeBoardTest, placePieceCheck4)

{

	TicTacToeBoard TTT;	

	ASSERT_TRUE(TTT.placePiece(2,2));

}




