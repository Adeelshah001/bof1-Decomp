void sub_08056690(s32 arg0, void *arg1, s32 arg2);
void sub_08057188(s32 arg0, void *arg1);
void sub_080571B0(s32 arg0, void *arg1);
void sub_080571D8(s32 arg0, void *arg1);
volatile long sub_08057200(s32 arg0, void *arg1)
{
  u8 *p = ((u8 *) arg1) + 0x105;
  u8 old = *p;
  *p = old + 1;
  if ((*p) == 0)
  {
    *p = old;
  }
  sub_08056690(arg0, arg1, 0x4D);
}

