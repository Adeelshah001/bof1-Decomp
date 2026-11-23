extern u8 D_030033F0[];
void sub_08040A74(s32 arg0);
void sub_080576BC(void *arg0)
{
  u8 *p = ((u8 *) arg0) + 0x4C;
  u8 b;
  if ((*p) == 0)
  {
    *p = (*p) + 1;
    b = D_030033F0[0];
    b = b | 0x80;
    D_030033F0[0] = b;
    if (b & 1)
    {
      sub_08040A74(0x33);
    }
    if (D_030033F0[0] & 2)
    {
      sub_08040A74(0x34);
    }
  }
}

