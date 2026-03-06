// 函数名称: sub_4e1810
// 虚拟地址: 0x4e1810
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

floatsub_4e1810(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    RECT rect
    GetClientRect(data_1150b8c, &rect)
    int32_t right = rect.right
    
    if (right != 0)
        int32_t bottom = rect.bottom
        
        if (bottom != 0)
            void* eax_2 = data_aca1ec
            float result = float.s(*(eax_2 + 0x14)) * float.s(arg1) / float.s(right)
            float var_1c = float.s(*(eax_2 + 0x18)) * float.s(arg2) / float.s(bottom)
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return result
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return 0
}
