// 函数名称: sub_4b4ee0
// 虚拟地址: 0x4b4ee0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4b4ee0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (arg2 s>= arg1[2])
        sub_489550(eax_1, &data_5b2591, "attribTreeItemIndex < tree.numItems", 
            "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x33ae, "NumTotalChildren")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t esi = *arg1
    int32_t result = 0
    int32_t var_264 = *(esi + arg2 * 0x18 + 0x10)
    uint32_t var_260[0x25][0x4]
    _memset(&var_260, 0, 0x254)
    int32_t eax_4 = 0
    void* edx = esi + (arg2 + 1) * 0x18
    
    while (true)
        while ((&var_264)[eax_4] == 0)
            int32_t temp0_1 = eax_4
            eax_4 -= 1
            
            if (temp0_1 - 1 s< 0)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return result
        
        int32_t ecx_2 = *(edx + 0x10)
        result += 1
        (&var_264)[eax_4] -= 1
        edx += 0x18
        eax_4 += 1
        (&var_264)[eax_4] = ecx_2
}
