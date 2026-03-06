// 函数名称: sub_48a0e0
// 虚拟地址: 0x48a0e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_48a0e0(void** arg1, int32_t arg2)
{
    // 第一条实际指令: void** var_8 = arg1
    void** var_8 = arg1
    
    if (arg2 s<= 0)
        int32_t eax
        sub_489550(eax, &data_5b2591, "length > 0", "d:\ax\trunk\ax2017\engine\xstring.cpp", 0x27, 
            "sXStringAllocBufferLength")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t* eax_1 = sub_498440(arg2 + 0x11)
    eax_1[3] += 1
    int32_t* ecx_2
    
    if (arg2 + 0x11 s<= 0x400 || eax_1[4] != 0xffffffff)
        ecx_2 = *eax_1
        
        if (ecx_2 == 0)
            sub_4982d0(eax_1)
            ecx_2 = *eax_1
        
        *eax_1 = *ecx_2
    else
        ecx_2 = sub_4c2e40(arg2 + 0x11)
    
    ecx_2[2] = arg2
    ecx_2[3] = arg2 + 1
    *ecx_2 = 0xfafafafa
    ecx_2[1] = 1
    *arg1 = &ecx_2[4]
    return &ecx_2[4]
}
