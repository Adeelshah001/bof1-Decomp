extern u8 D_030036A0[];
void sub_08004EA0(s32);
void sub_0800DB08(void)
{
  u16 *new_var;
  u8 *base;
  int new_var2;
  u16 v;
  u8 *state;
  sub_08004EA0(0x815E);
  base = D_030036A0;
  v = 0xDE8;
  new_var = (u16 *) (base + 2);
  *new_var = v;
  new_var2 = 0xFD9C;
  v = 0xFD9C;
  *((u16 *) (base + 6)) = v;
  *((u16 *) (base + 0x2C)) = new_var2;
  state = D_03004830;
  state[0x2B]++;
}

