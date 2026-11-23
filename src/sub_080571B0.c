void sub_08056690(s32 arg0, void *arg1, s32 arg2);
void sub_08057188(s32 arg0, void *arg1);
short sub_080571B0(s32 arg0, void *arg1)
{
  u8 *p = ((u8 *) arg1) + 0x100;
  u8 old = *p;
  u8 *new_var;
  char new_var2;
  new_var = p;
  new_var2 = 1;
  *new_var = old + new_var2;
  if ((*new_var) == 0)
  {
    *p = old;
  }
  sub_08056690(arg0, arg1, 0x49);
}

void sub_080571D8(s32 arg0, void *arg1);
void sub_08057200(s32 arg0, void *arg1);
