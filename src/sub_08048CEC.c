extern u8 D_030033D0;
u8 sub_0803A508(void);
void sub_08037FC4(Entity *, s32);
void sub_08037C98(Entity *, s32);
void sub_0803A974(Entity *);
void sub_08048D60(Entity *);
void sub_08048CEC(Entity *arg0)
{
  Entity *new_var;
  if (sub_0803A508() != 0)
  {
    return;
  }
  if ((D_030033D0 & 1) && (((u8 *) arg0)[0xC2] == 0))
  {
    new_var = arg0;
    if (((u8 *) arg0)[0xC3] == 0x1F)
    {
      arg0->unk64 = (u32) sub_08048D60;
      sub_08037FC4(new_var, 4);
      ((u8 *) arg0)[0xC3] = 0;
    }
    else
    {
      ((u8 *) arg0)[0xC3]++;
    }
    sub_08037C98(new_var, 0);
    sub_0803A974(new_var);
  }
  if (!(D_030033D0 & 1))
  {
    ((u8 *) arg0)[0xC2] = 0;
  }
}

