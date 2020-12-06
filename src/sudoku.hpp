#ifndef SUDOKU_H_
#define SUDOKU_H_

#include <vector>
#include <memory>
#include <iostream>

class Sudoku
{
private:
    std::shared_ptr<std::vector<std::vector<int>>> _sudokuOutput;
    int _gridSize = 9;
    
    bool RowCheck(int row, int num);
    bool ColumnCheck(int col, int num);
    bool SubGridCheck(int rowStartIndex, int colStartIndex, int num);
    bool IsCellEmpty(int &row, int &col);
    bool IsValid(int row, int col, int num);
    
public:
    Sudoku(std::shared_ptr<std::vector<std::vector<int>>> inputGrid);
    ~Sudoku();
    bool solveBoard();
    void PrintBoard();
    void Test();

    std::shared_ptr<std::vector<std::vector<int>>> getSolution(){
        return _sudokuOutput;
    }
    
}; // class

#endif