// 函数名称: sub_45fbd0
// 虚拟地址: 0x45fbd0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_45fbd0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* var_4 = arg1
    int32_t* var_4 = arg1
    uint32_t eax = sub_45b560(arg2)
    
    if (*arg1 == 1)
        int32_t esi_2 = arg1[2] - 1
        
        if (*arg2 == 1)
            int32_t edi_2 = arg2[2] - 1
            int32_t eax_1 = sub_45fb60(eax)
            int32_t result = 1
            
            if (esi_2 == eax_1 || esi_2 == 6)
                result = 2
            
            if (edi_2 != eax_1 && edi_2 != 6)
                return result
            
            return result + 1
    
    sub_489550(eax, &data_5b2591, "die.type == ROLLGFX_DIE", 
        "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x3d3f, "DieGetColor")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
