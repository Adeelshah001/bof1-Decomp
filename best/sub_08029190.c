extern u8 D_02000000[];
void sub_08029190(void *arg0)
{
  u8 *base_ptr = (u8 *) arg0;
  u16 i = 0;
  u16 j = 0;
  u16 mask = 0x0F;
  u16 bound;
  do
  {
    D_02000000[j] = (*((u8 **) (base_ptr + 0x28)))[i] >> 4;
    D_02000000[j + 1] = (*((u8 **) (base_ptr + 0x28)))[i] & mask;
    i++;
    j += 2;
  }
  while (i <= 0x3FF);
}

