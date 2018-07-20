/*=== puzmon0: �\�[�X�R�[�h���` ===*/
/*** �C���N���[�h�錾 ***/

#include<stdio.h>


/***�񋓌^�錾***/
enum {SLIME=0,GOBLIN,BIGBAT,WEREWOLF,DRAGON};
enum {FIRE,WATER,WIND,EARTH,LIFE,EMPTY};

/***�O���[�o���萔�̐錾 ***/
int gotMonsterCount = 0;
const char ELEMENT_SYMBOLS[16];
const int ELEMENT_COLORS[6] = {\x1b[31m,\x1b[36m,\x1b[32m,\x1b[33m,\x1b[35m,\x1b[30m};

/***�\���̌^�錾***/
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



/***�v���g�^�C�v�錾***/
void goDungeon(char* playerName);
void doBattle(char* playerName);
/***�֐��錾***/

int main(int argc, char** argv)

{ //{{{
    if(argc == 2){

        char* playerName = argv[1];
        
        printf("*** Puzzle & Monsters ***\n");
        printf("%s�̓_���W�����ɓ��B�����\n",playerName);

        while(gotMonsterCount <= 4){
            goDungeon(playerName); //{{{ }}}
            doBattle(playerName); //{{{ }}}
        }

        printf("%s�̓_���W�����𐧔e����!\n");
        printf("***GAME CLEARED!***\n");
        printf("�|���������X�^�[��=%d",gotMonsterCount);


    } else
    {
        printf("�G���[: �v���C�������w�肵�ċN�����ĉ������\n");
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
            printf("�X���C�������ꂽ!\n");
            printf("�X���C����|����!\n");
            break;
        case GOBLIN:
            printf("�S�u���������ꂽ!\n");
            printf("�S�u������|����!\n");
            break;
        case BIGBAT:
            printf("�I�I�R�E���������ꂽ!\n");
            printf("�I�I�R�E������|����!\n");
            break;
        case WEREWOLF:
            printf("�E�F�A�E���t�����ꂽ!\n");
            printf("�E�F�A�E���t��|����!\n");
            break;
        case DRAGON:
            printf("�h���S�������ꂽ!\n");
            printf("�h���S����|����!\n");
            break;

    }
        gotMonsterCount++;
    

    
} //}}}

/***���[�e�B���e�B�֐��錾***/

void printMonsterName(Monster m.name)
{
    printf("");