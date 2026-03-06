// 函数名称: sub_445af0
// 虚拟地址: 0x445af0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_445af0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_10 = sub_4450a0(arg1, arg2)
    int32_t var_10 = sub_4450a0(arg1, arg2)
    int32_t eax_1 = sub_4450a0(arg1, arg2)
    int32_t var_c = eax_1
    
    if (*(arg1 + 0x10) == 0)
        int32_t ecx_1 = var_10
        void* eax_3 = *(arg1 + ecx_1 * 0xc + 0x8c4)
        sub_444430(eax_3, 9, arg1, arg2, ecx_1, *(eax_3 + 0xc), 0, 0)
        void* eax_5 = *(arg1 + eax_1 * 0xc + 0x8c4)
        sub_444430(eax_5, 9, arg1, arg2, eax_1, *(eax_5 + 0xc), 1, 0)
    
    int32_t ecx_4 = arg2 * 0x1bc
    int32_t var_8 = 2
    int32_t result = *(ecx_4 + arg1 + 0x1c4)
    
    if (result s< *(ecx_4 + arg1 + 0x1c0))
        return result
    
    return (*(*(ecx_4 + arg1 + 0x1c) + 4))(arg1, arg2, 0, &var_10, &var_8, 0, 0, 0, 0, 0)
}
