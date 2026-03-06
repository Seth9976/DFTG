// 函数名称: sub_49f140
// 虚拟地址: 0x49f140
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_49f140(void* arg1)
{
    // 第一条实际指令: int32_t eax_2 = *(arg1 + 0xfb8)
    int32_t eax_2 = *(arg1 + 0xfb8)
    
    if (eax_2 u> 6)
        sub_489550(eax_2, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x1280, 
            "UI2AcceptsClicks")
        
        if (IsDebuggerPresent() != 1)
            noreturn sub_489700() __tailcall
        
        breakpoint
    
    switch (eax_2)
        case 0
            int32_t eax = *(arg1 + 0xfec)
            
            if (eax == 2)
                int32_t eax_1
                eax_1.b = *(arg1 + 0xf50) != 0
                return eax_1
            
            if (eax == 3)
                if (*(arg1 + 0xf8c) == 0)
                    eax_2.b = 0
                    return eax_2
                
                eax_2.b = 1
                return eax_2
            
            if (eax == 5)
                eax_2.b = 1
                return eax_2
            
            eax_2.b = 0
            return eax_2
        case 1, 3, 4, 5
            eax_2.b = 0
            return eax_2
        case 2, 6
            eax_2.b = 1
            return eax_2
}
