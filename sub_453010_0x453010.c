// 函数名称: sub_453010
// 虚拟地址: 0x453010
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_453010(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx = *(arg1 + (arg2 << 2) + 0x29c)
    int32_t ecx = *(arg1 + (arg2 << 2) + 0x29c)
    int32_t* ecx_1
    
    if (ecx == 0)
        ecx_1 = nullptr
    else
        ecx_1 = sub_452cc0(ecx)
    
    int32_t* var_8 = ecx_1
    int32_t* eax_2 = Unlock(&var_8)
    int32_t* esi = var_8
    
    if (ecx_1 != esi)
        int32_t* edi_1
        
        do
            if (ecx_1 == 0)
                sub_489550(eax_2, &data_5b2591, "gfx", 
                    "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x2ac, 
                    "Tiles::TileIt::operator *")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            edi_1 = ecx_1
            ecx_1 = ecx_1[0x10]
            
            if (ecx_1 != 0)
                eax_2 = sub_452cc0(ecx_1)
                ecx_1 = eax_2
        while (ecx_1 != esi)
        
        if (edi_1 != 0)
            return edi_1[0x22a]
    
    return 0
}
