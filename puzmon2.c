/*=== puzmon0: ソースコード雛形 ===*/
/*** インクルード宣言 ***/

#include<stdio.h>


/***列挙型宣言***/
enum {SLIME=0,GOBLIN,BIGBAT,WEREWOLF,DRAGON};
enum {FIRE,WATER,WIND,EARTH,LIFE,EMPTY};

/***グローバル定数の宣言 ***/
int gotMonsterCount = 0;
const char ELEMENT_SYMBOLS[16];
const int ELEMENT_COLORS[6] = {\x1b[31m,\x1b[36m,\x1b[32m,\x1b[33m,\x1b[35m,\x1b[30m};

/***構造体型宣言***/
typedef char Monster_name[256];
typedef struct {
    Monster_name name;
    int hp;
    int maxhp;
    int Element;
    int attack;
    int defence;
} Monster;

typedef struct {
    Monster[0];



/***プロトタイプ宣言***/
void goDungeon(char* playerName);
void doBattle(char* playerName);
/***関数宣言***/

int main(int argc, char** argv)

{ //{{{
    if(argc == 2){

        char* playerName = argv[1];
        
        printf("*** Puzzle & Monsters ***\n");
        printf("%sはダンジョンに到達した｡\n",playerName);

        while(gotMonsterCount <= 4){
            goDungeon(playerName); //{{{ }}}
            doBattle(playerName); //{{{ }}}
        }

        printf("%sはダンジョンを制覇した!\n");
        printf("***GAME CLEARED!***\n");
        printf("倒したモンスター数=%d",gotMonsterCount);


    } else
    {
        printf("エラー: プレイヤ名を指定して起動して下さい｡\n");
    }

    return 0;
} //}}}

void goDungeon(char* playerName)
{ //{{{

} //}}}

void doBattle(char* playnerName)
{ //{{{
    switch(gotMonsterCount){
        case SLIME:
            printf("スライムが現れた!\n");
            printf("スライムを倒した!\n");
            break;
        case GOBLIN:
            printf("ゴブリンが現れた!\n");
            printf("ゴブリンを倒した!\n");
            break;
        case BIGBAT:
            printf("オオコウモリが現れた!\n");
            printf("オオコウモリを倒した!\n");
            break;
        case WEREWOLF:
            printf("ウェアウルフが現れた!\n");
            printf("ウェアウルフを倒した!\n");
            break;
        case DRAGON:
            printf("ドラゴンが現れた!\n");
            printf("ドラゴンを倒した!\n");
            break;

    }
        gotMonsterCount++;
    

    
} //}}}

/***ユーティリティ関数宣言***/

void printMonsterName(Monster m.name)
{
    printf("");
