// 函数名称: sub_45fa50
// 虚拟地址: 0x45fa50
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int64_t* __fastcallsub_45fa50(uint32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_b0 = arg2
    int32_t edi = 0
    int32_t ecx = *(arg1 + 0x2d0)
    int32_t ebx
    int32_t* result_1
    
    if (ecx == 0)
        int32_t var_b8
        ebx = var_b8
        result_1 = nullptr
    else
        int32_t* result_2
        result_2, arg2 = sub_452c30(ecx)
        result_1 = result_2
        ebx = result_1[0xa]
    
    int32_t var_bc
    int64_t* result = sub_4538b0(&var_bc)
    int32_t var_ac[0x29]
    
    while (result_1 != var_bc)
        if (result_1 == 0)
            sub_489550(result, &data_5b2591, "gfx", "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 
                0x5da, "Dice::DiceIt::operator *")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        arg2.b = 1
        result, arg2 = sub_45e3d0(result_1, arg2.b)
        
        if (result != 7)
            var_ac[edi] = result_1
            edi += 1
        
        if (ebx != 0)
            result, arg2 = sub_452c30(ebx)
            result_1 = result
            ebx = result_1[0xa]
        else
            result_1 = nullptr
    
    int32_t ebx_1 = 0
    
    if (edi s> 0)
        do
            int32_t* esi = var_ac[ebx_1]
            arg2.b = 1
            int32_t eax_3 = sub_45e3d0(esi, arg2.b)
            result, arg2 = sub_45a830(eax_3, esi, arg1, eax_3, false, 1, 5, 1, var_b0)
            ebx_1 += 1
        while (ebx_1 s< edi)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
