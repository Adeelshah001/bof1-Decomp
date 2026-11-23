extern u8 D_03002AB0[];
extern u8 D_03001850[];
extern void *D_03004154;
extern u8 D_03004584[];
extern u8 D_03003520[];
extern u8 D_030036A0[];
extern u8 D_03004830[];
void sub_08019720(void);
void *sub_0803ED98(void);
void sub_08072CC4(s32);
void sub_0803EE88();
void sub_08004EA0(s32);
void sub_08017214(void);
void sub_080170AC(void)
{
  void *ent;
  short new_var;
  u8 *new_var2;
  ent = sub_0803ED98();
  D_03004154 = ent;
  if (ent != NULL)
  {
    new_var2 = (u8 *) (((u8 *) ent) + 0x3A);
    new_var = 0;
    *new_var2 = 1;
    *((u8 *) (((u8 *) D_03004154) + 0x3B)) = new_var;
    *((u8 *) (((u8 *) D_03004154) + 0x3C)) = 0x13;
    *((u8 *) (((u8 *) D_03004154) + 0x41)) = 0x38;
    *((u8 *) (((u8 *) D_03004154) + 0x80)) = 0x29;
    D_03004830[0x2C] = 0x80;
    D_03004830[0x2B]++;
  }
}

void sub_08016F44(void);
void sub_08016EF4(void);
