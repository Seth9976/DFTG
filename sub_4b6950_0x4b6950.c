// 函数名称: sub_4b6950
// 虚拟地址: 0x4b6950
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_tsub_4b6950()
{
    // 第一条实际指令: int32_t esi = data_643654
    int32_t esi = data_643654
    int32_t var_c
    uint32_t eax
    char const* const ecx
    
    if (esi s> 0)
        int32_t ecx_1 = 0xffffffff
        eax = 0
        
        if (esi s> 0)
            do
                int32_t edx_1 = (&data_642654)[eax]
                
                if (ecx_1 == 0xffffffff || ecx_1 s> edx_1)
                    ecx_1 = edx_1
                
                eax += 1
            while (eax s< esi)
            
            if (ecx_1 != 0xffffffff)
                return sub_4a80d0(eax, data_642624, data_642620, ecx_1)
        
        char const* const var_8_2 = "UI2GetHighestEl"
        var_c = 0x37ba
        ecx = "bestIndex != -1"
    else
        char const* const var_8 = "UI2GetHighestEl"
        var_c = 0x37ad
        ecx = "gUI2Editor.s.activeSetCount > 0"
    
    sub_489550(eax, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\ui2.cpp", var_c, "UI2GetHighestEl")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
