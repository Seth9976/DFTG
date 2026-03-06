// 函数名称: sub_5518d0
// 虚拟地址: 0x5518d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

LRESULTsub_5518d0()
{
    // 第一条实际指令: LRESULT result = data_11e705c
    LRESULT result = data_11e705c
    
    if (result != 0)
        if (result s<= 0)
            sub_489550(result, &data_5b2591, "gUI.s.activeSetCount > 0", 
                "d:\ax\trunk\ax2017\engine\editor\uieditor.cpp", 0x5b2, "LowestSelectedItem")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t esi_1 = sub_54e090(data_11e605c)
        int32_t edi_1 = 1
        result = data_11e705c
        
        if (result s> 1)
            do
                int32_t eax_1 = sub_54e090((&data_11e605c)[edi_1])
                
                if (eax_1 s< esi_1)
                    esi_1 = eax_1
                
                result = data_11e705c
                edi_1 += 1
            while (edi_1 s< result)
        
        int32_t ecx_3
        
        if (esi_1 != 0)
            ecx_3 = esi_1 - 1
        label_55192a:
            sub_553be0(ecx_3)
            char* ecx_4
            ecx_4.b = 1
            sub_54dee0(ecx_4)
            sub_5151c0(data_11e6050)
            return sub_5539f0()
        
        if (result != 0)
            ecx_3 = 0
            goto label_55192a
    
    return result
}
