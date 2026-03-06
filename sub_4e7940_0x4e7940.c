// 函数名称: sub_4e7940
// 虚拟地址: 0x4e7940
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4e7940(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = *((arg1 << 2) + &data_1150df4)
    int32_t eax = *((arg1 << 2) + &data_1150df4)
    data_1150e1c = eax
    
    if (arg2 == 1)
        data_1150e1c = 0x3e8
    else if (eax != 0 && eax != 0x3e8)
        if (eax != 1)
            sub_489550(eax, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\vr.cpp", 0x10d, 
                "VRSetRenderTargetForEye")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        if (sub_4e7630() == 0)
            int32_t var_10_1 = arg1
            return sub_4dee30(*((data_1150ddc << 2) + &data_1150dc8), data_1150dd0)
        
        int32_t ecx_1 = data_1150ddc
        int32_t var_10 = ecx_1
        return sub_4dee30(*((ecx_1 << 2) + &data_1150dc0), *((ecx_1 << 2) + &data_1150dd8))
    
    void* eax_2
    
    if (*(data_aca1ec + 0x1c) != 0 && data_115107f == 0)
        eax_2 = data_114e818
    
    int32_t ecx
    int32_t edx
    
    if (*(data_aca1ec + 0x1c) != 0
            && (data_115107f != 0 || eax_2 == 0 || ((*(eax_2 + 0x1c) u>> 0xd).b & 1) == 0))
        int32_t eax_5 = data_1150ddc
        edx = *((eax_5 << 2) + &data_1150dd4)
        ecx = *((eax_5 << 2) + &data_1150dbc)
    else
        edx = data_1150dcc
        ecx = *((data_1150ddc << 2) + &data_1150dc4)
    
    void* eax_10 = data_114ec70
    *(eax_10 + 0x24c) = 0
    *(eax_10 + 0xf0) = 2
    *(eax_10 + 0x100) = ecx
    *(eax_10 + 0x104) = edx
    *(eax_10 + 0x108) = 1
    return sub_4ded00(eax_10, edx, ecx, 1)
}
