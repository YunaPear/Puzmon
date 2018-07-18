/*=== puzmon0: ソースコード雛形 ===*/
/*** インクルード宣言 ***/

#include<stdio.h>

/***列挙型宣言***/
enum {SLIME=0,GOBLIN,BIGBAT,WEREWOLF,DRAGON};

/***グローバル定数の宣言 ***/
int gotMonsterCount = 0;
/***構造体型宣言***/

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
        printf("エラー:　プレイヤ名を指定して起動して下さい｡\n");
    }

    return 0;
} //}}}

/***ユーティリティ関数宣言***/
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
