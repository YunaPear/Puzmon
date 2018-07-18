/*=== puzmon0: �\�[�X�R�[�h���` ===*/
/*** �C���N���[�h�錾 ***/

#include<stdio.h>

/***�񋓌^�錾***/
enum {SLIME=0,GOBLIN,BIGBAT,WEREWOLF,DRAGON};

/***�O���[�o���萔�̐錾 ***/
int gotMonsterCount = 0;
/***�\���̌^�錾***/

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
        printf("�G���[:�@�v���C�������w�肵�ċN�����ĉ������\n");
    }

    return 0;
} //}}}

/***���[�e�B���e�B�֐��錾***/
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
