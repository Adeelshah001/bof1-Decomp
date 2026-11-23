extern u8 D_03004F50[];
void sub_08037FC4(void *arg0, s32 arg1);
void sub_08089CBC(void *arg0);
void sub_08089CC4(void *arg0);
void sub_08089D94(void *arg0);
void sub_080898C0(Entity *arg0)
{
  u8 temp_r2;
  u32 temp_r0;
  u8 *ptr50;
  temp_r2 = arg0->unk54;
  temp_r0 = temp_r2 - 1;
  arg0->unk54 = temp_r0;
  if ((temp_r0 << 24) != 0)
  {
    if (temp_r2 & 1)
    {
      sub_08089CC4(arg0);
    }
    else
    {
      sub_08089CBC(arg0);
    }
  }
  else
  {
    sub_08037FC4(arg0, 2);
    ptr50 = ((u8 *) arg0) + 0x50;
    (*ptr50)++;
    arg0->unk41 = 8;
    temp_r2 = D_03004F50[0x60];
    arg0->unk54 = temp_r2;
    D_03004F50[0x4A] = temp_r2 + 1;
    sub_08089D94(arg0);
  }
}

