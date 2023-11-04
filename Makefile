# makefile for xxx

#### 頻繁に変更が必要なもの

#### 実装の関数群のオブジェクトファイル名 \ を書くと次の行も継続できる
# 1 行目に XXXX が 2 行目に YYYY が 3 行目に ZZZZ が書くことでコンフリクトを削減できる(4行目は\が要らない)
# 記述例
# OBJECTS = instruction.o add_a_im.o \
#                   mov_a_im.o \
#                   in b bin2int.o \
#                   led2str.o

#### 実装の関数群のオブジェクトファイル名 \ を書くと次の行も継続できる
# 1 行目は 43xx XXXX が記述
# 2 行目は 43yy YYYY が記述
# 3 行目は 4336 丸山悠大 が記述

OBJECTS= setByNum.o makeBoard.o moveRight.o displayBoard.o\
        isEquals.o moveLeft.o inMove.o moveAll.o print2048.o\
        appearNum.o initBoard.o checkFinish.o moveLine.o moveNum.o moveUp.o moveDown.o 



#### テストの関数群のオブジェクトファイル名 \ を書くと次の行も継続できる
# 1 行目は 43xx XXXX が記述
# 2 行目は 43yy YYYY が記述
# 3 行目は 4336 丸山悠大 が記述

TEST_OBJECTS= testSetByNum.o testMakeBoard.o testMoveRight.o testDisplayBoard.o\
        testisEquals.o testMoveLeft.o testInMove.o\
        testAppearNum.o testInitBoard.o testCheckFinish.o testMoveLine.o testMoveNum.o testMoveUp.o testMoveDown.o



#### UML から作りたい方の画像ファイルを記述
#PNGS= a.png
#SVGS= a.svg

# 最終実行ファイル(名前を修正したら .gitignore も修正すること)
TARGET=2048

# テスト実行ファイル(名前を修正したら .gitignore も修正すること)
TEST_TARGET=test2048


# curses / ncurses を使うか (どちらかを残す)
CURSES=on
#CURSES=off

#### 以下は変更する必要がないもの

.SUFFIXES: .uml .svg .png

.uml.png:
	plantuml $?; open $@

.uml.svg:
	plantuml -tsvg $?; open -a Safari $@

# 最終実行ファイルの実名
TARGET_EXE=$(TARGET)$(EXE)
# ターゲット実行ファイルの実名
TEST_TARGET_EXE=$(TEST_TARGET)$(EXE)
# 実装のためのヘッダー(プロトタイム宣言、構造体宣言、定数定義を含む)
HEADER=$(TARGET).h
# 実装のメインファイル main 関数を含む
MAIN=$(TARGET).o
# テストのためのヘッダー(プロトタイム宣言)
TEST_HEADER=$(TEST_TARGET).h
# テストのメインファイル main 関数を含む
TEST_MAIN=$(TEST_TARGET).o
# テストに必要なファイル
TEST_COMMON=testCommon.o
# 必要な CFLAGS
CFLAGS=-Wall -g
# 必要なライブラリ
LIBS=-lm

ifeq ($(OS),Windows_NT)
	CC=gcc
	RM=cmd.exe /C del
	EXE=.exe
else
	RM=rm -f
	EXE=
endif

ifeq ($(CURSES),on)
	ifeq ($(OS),Windows_NT)
		LIBS=-lncursesw -lm
	else
		CFLAGS=-Wall -g
		LDFLAGS=-L /usr/lib/ -L /usr/local/lib -L /usr/local/opt/ncurses/lib
		INCLUDE=-I ./include -I /usr/local/opt/ncurses/include
		LIBS=-lncursesw -lm
	endif
endif

exec: $(TARGET_EXE) $(PNGS) $(SVGS)
test: $(TEST_TARGET_EXE)

$(TARGET_EXE): $(MAIN) $(OBJECTS) $(HEADER)
	$(CC) -o $@ $(CFLAGS) $(MAIN) $(OBJECTS) $(LIBS) $(LDFLAGS) $(INCLUDE)

$(TEST_TARGET_EXE): $(TEST_MAIN) $(OBJECTS) $(TEST_OBJECTS) $(TEST_COMMON) $(HEADER) $(TEST_HEADER)
	$(CC) -o $@ $(CFLAGS) $(TEST_MAIN) $(OBJECTS) $(TEST_OBJECTS) $(TEST_COMMON) $(LIBS) $(LDFLAGS) $(INCLUDE)

clean:
	$(RM) $(TARGET_EXE) $(TEST_TARGET_EXE) $(MAIN) $(TEST_MAIN) $(OBJECTS) $(TEST_OBJECTS) $(TEST_COMMON)
