void sub_08007494(void);
void sub_080075BC(s32);
void sub_080152E4(void)
{
  int new_var;
  u16 *actor = (u16 *) D_03003420;
  unsigned long coordinate;
  coordinate = 0xD38;
  actor[1] = coordinate;
  new_var = 0xA5C;
  coordinate = new_var;
  actor[3] = coordinate;
  coordinate -= 0x20;
  actor[0x16] = coordinate;
  sub_08007494();
  sub_080075BC(0x83F3);
}

