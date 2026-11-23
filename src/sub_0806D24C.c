extern u8 D_03000F44[];
extern u8 D_03004F50[];
u8 sub_08073064(void *);
void sub_08080470(void *);
void sub_080A0A4C(void *, s32);
void sub_0806D24C(u8 *arg0)
{
  u8 *new_var2;
  u8 ret;
  u8 new_var;
  if (arg0[2] == 0)
  {
    u8 *ptr;
    s32 zero;
    sub_080A0A4C(D_03000F44, 4);
    arg0[4] = 0;
    new_var2 = arg0 + 0x54;
    ptr = new_var2;
    new_var = *ptr;
    zero = 0;
    *((u16 *) ptr) = new_var;
    ptr += 9;
    *ptr = zero;
    if ((D_03004F50[0x61] & 0xF) == D_03004F50[0x60])
    {
      arg0[0x5E] = 0xFF;
    }
    else
    {
      arg0[0x5E] = zero;
    }
    if (zero)
    {
      sub_08080470(arg0);
      arg0[2]++;
    }
    else
    {
      sub_08080470(arg0);
      arg0[2]++;
    }
  }
  ret = sub_08073064(arg0);
  if (ret == 0)
  {
    arg0[1] = 8;
    arg0[3] = 0;
    arg0[2] = 0;
  }
}

