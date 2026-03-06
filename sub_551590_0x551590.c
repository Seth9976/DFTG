// 函数名称: sub_551590
// 虚拟地址: 0x551590
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_551590()
{
    // 第一条实际指令: if (data_11e705c s<= 0)
    if (data_11e705c s<= 0)
        int32_t eax
        sub_489550(eax, &data_5b2591, "gUI.s.activeSetCount > 0", 
            "d:\ax\trunk\ax2017\engine\editor\uieditor.cpp", 0x53c, "HighestSelectedItem")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t i = 1
    int32_t result = sub_54e090(data_11e605c)
    
    if (data_11e705c s> 1)
        do
            int32_t result_1 = sub_54e090((&data_11e605c)[i])
            
            if (result_1 s> result)
                result = result_1
            
            i += 1
        while (i s< data_11e705c)
    
    return result
}
