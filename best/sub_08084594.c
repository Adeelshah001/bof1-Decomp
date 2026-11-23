void sub_08084594(void *arg0)
{
  u8 v;
  u8 v2 = *((u8 *) (((u8 *) arg0) + 0x1D));
  if ((*((u8 *) (((u8 *) arg0) + 0x1D))) == 0)
  {
    sub_08084118();
  }
  else
    if ((*((u8 *) (((u8 *) arg0) + 0x1D))) == 1)
  {
    sub_080845C0();
  }
  else
    if (v2 != 2)
  {
    sub_08084628();
  }
  else
  {
    sub_080845F4();
  }
}

