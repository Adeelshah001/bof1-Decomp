extern u8 D_03002AB0[];
extern u8 D_030023E0[];
extern const u8 D_08151318[];
extern const u8 D_0815132A[];
u8 sub_08075428(u8);
u16 sub_08074ECC(s32);
u8 sub_08075278(void *, u8);
u8 sub_0807514C(void);
void sub_080751DC(void);
u16 sub_08075214(s32 arg0);
s32 sub_08075248(void *object, s16 *out)
{
  u8 kind = sub_08075278(object, ((u8 *) object)[0x61] * 2);
  s32 result;
  *out = kind;
  if (kind != 5)
  {
 do { } while (0);
    result = 0;
  }
  else
  {
    s16 value = 0x400;
    *out = 0x400;
    result = 1;
  }
  return result;
}
