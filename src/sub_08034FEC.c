void sub_08034FEC(u8 *arg0)
{
  int new_var;
  u8 **new_var2;
  u8 *p = arg0 + 0x4C;
  u8 zero = 0;
  new_var = 0x3C;
  *p = 8;
  arg0[0xB8] = zero;
  new_var2 = &p;
  p += new_var;
  *((u32 *) (*new_var2)) += 2;
}

typedef struct 
{
  u8 pad00[0x2D];
  s8 unk2D;
} D_03004830_Struct;
void sub_08035008(u8 *arg0);
