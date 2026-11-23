extern u8 D_030034A0[];
extern u8 D_03004830[];
extern void sub_08019B78(s32 arg0);
extern void sub_080017EC(s32 arg0);
typedef struct 
{
  u8 pad[0x06];
  u16 unk6;
  u8 pad2[0x80 - 0x08];
} ActorRec;
void sub_0801872C(void)
{
  int new_var;
  int new_var2;
  sub_08019B78(0x12);
  D_03004830[0x2D] = 1;
  {
    ActorRec *arr = (ActorRec *) D_030034A0;
    u16 val = 0xAE6C;
    new_var2 = 3;
    ((ActorRec *) D_030034A0)[0].unk6 = val;
    ((ActorRec *) D_030034A0)[1].unk6 = val;
    ((ActorRec *) D_030034A0)[2].unk6 = val;
    arr[new_var2].unk6 = val;
    new_var = 4;
    ((ActorRec *) D_030034A0)[new_var].unk6 = val;
    ((ActorRec *) D_030034A0)[5].unk6 = val;
    ((ActorRec *) D_030034A0)[6].unk6 = val;
  }
  sub_080017EC(0xB3);
}

