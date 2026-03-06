// 函数名称: sub_448f40
// 虚拟地址: 0x448f40
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_448f40(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* ebx_1 = arg2 * 0x1bc + arg1
    int32_t esi = 0
    *(*(arg1 + 0xc44) + (arg2 << 2) + 0x8c4) = 2
    int32_t i = *(ebx_1 + 0x174)
    void* var_128 = ebx_1
    int32_t var_124[0x47]
    
    while (i != 0xffffffff)
        var_124[esi] = i
        i = sx.d(*(arg1 + i * 0xc + 0x8ca))
        esi += 1
    
    int32_t i_1 = *(ebx_1 + 0x178)
    void* edx = nullptr
    
    if (i_1 != 0xffffffff)
        do
            var_124[esi + edx] = i_1
            i_1 = sx.d(*(arg1 + i_1 * 0xc + 0x8ca))
            edx += 1
        while (i_1 != 0xffffffff)
        
        ebx_1 = var_128
    
    void* eax_5 = edx + esi
    var_128 = eax_5
    
    if (eax_5 s< 3)
        int64_t var_130 = 0
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return 0
    
    if (*(ebx_1 + 0x1c4) s>= *(ebx_1 + 0x1c0))
        (*(*(ebx_1 + 0x1c) + 4))(arg1, arg2, 0x12, &var_124, &var_128, 0, 0, 0, 0, 0)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return 1
}
