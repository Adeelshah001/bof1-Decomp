extern u8 D_03004F50[];
s32 sub_08096D94(void);
s32 sub_08096DD8(u8 *entity);
extern u16 D_020211CE;
void sub_08096B60(u8 *entity, u32 packed)
{
  u8 *bytes;
  u8 *new_var;
  u16 *color = &D_020211CE;
  u8 zero;
  *color = 0;
  new_var = entity + 0x54;
  bytes = new_var;
  zero = 0;
  bytes[0] = packed;
  packed >>= 8;
  bytes++;
  *bytes = packed;
  *((u16 *) (entity + 0x38)) = zero;
}

