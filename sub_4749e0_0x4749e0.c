// 函数名称: sub_4749e0
// 虚拟地址: 0x4749e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4749e0(uint32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t eax_6 = arg2[4]
    int32_t eax_6 = arg2[4]
    int32_t var_c
    char const* const ecx
    
    if (eax_6 != 3)
        if (eax_6 != 7)
            int32_t ecx_1 = *(arg1 + 0xdc4)
            *(arg1 + 0xdc4) = ecx_1 + 1
            *(arg1 + (ecx_1 << 2) + 0xbe4) = arg2[0x22a]
            *(arg1 + (ecx_1 << 3) + 0xc84) = arg2[4]
            int32_t eax_3 = arg2[7]
            *(arg1 + (ecx_1 << 3) + 0xc88) = eax_3
            sub_45a830(eax_3, arg2, arg1, 7, false, 1, 0, 1, 0)
            sub_46a420(0x1d)
            return sub_46a420(0x1c) __tailcall
        
        char const* const var_8_1 = "ExecManageRecall"
        var_c = 0x6d93
        ecx = "gfx.die.where != DW_CUP"
    else
        char const* const var_8 = "ExecManageRecall"
        var_c = 0x6d92
        ecx = "gfx.die.where != DW_CITIZENRY"
    
    sub_489550(eax_6, &data_5b2591, ecx, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_c, 
        "ExecManageRecall")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
