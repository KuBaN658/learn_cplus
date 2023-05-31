#include <iostream>
#include <vector>
#include <cmath>



int getQueenCombination(int n = 8);
bool canSetQueen(std::vector<int> board, int colIndex, int rowIndex);
int addQueen(std::vector<int> board, int rawIndex);

int main() {
    int n;
    std::cin >> n;
    std::cout  << getQueenCombination(n);

    return 0;
}

//Представим нашу доску в виде массива, где индекс элемента это строка, а
//сам элемень - столбик. Далее мы в 0 ячейчку устанавливем все возможные значения от
//0 до n-1. Далее мы пытемся поставить фигуру в 1 строку, если это возможно,
//то продолжаем, пока не поставим фигуру в последнюю строку или не сможем поставить
//фигуру. Если мы не смогли поставить фигуру в какую либо строку, то мы возвращаемся
//на предыдущую строку и ставим ферзя другим отличным от предыдущих положений
//способом и идем на следующую строку. Так алгоритм мы проверим все возможные
//расстановки.
//getQueenCombination: это наша изначальная функция для 0 строки.
int getQueenCombination(int n) {
    std::vector<int> board(n);
    int count;

    count = 0;
    for (int i = 0; i < board.size(); i++) {
        board[0] = i;
        count += addQueen(board, 1);
    }
    return count;
}

//canSetQueen: мы не можем установить нашего ферзя в 2 случаях: если совпадут
//номера колонок или если ферзь стоит по диагонали.
bool canSetQueen(std::vector<int> board, int setRow, int setCol) {
    for (int i = 0; i < setRow; i++) {
        if ((board[i] == setCol) ||
            ((setRow - i) == abs(setCol - board[i])))
            return false;
    }
    return true;
}

//Перебираем все возможные подстановки ферзя, после каждой подстановки запуская 
//эту же функцию для следующей строки. Если мы смогли поставить ферзя в последнюю
//строку, то к общему числу подстановок добаляем 1.
int addQueen(std::vector<int> board, int rawIndex) {
    int count;

    if (rawIndex == board.size())
        return 1;

    count = 0;
    for (int i = 0; i < board.size(); i++) {
        if (canSetQueen(board, rawIndex, i)) {
            board[rawIndex] = i;
            count += addQueen(board, rawIndex + 1);
        }
    }
    return count;
}