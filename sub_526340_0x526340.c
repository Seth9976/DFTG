// 函数名称: sub_526340
// 虚拟地址: 0x526340
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_526340(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    char* esi = arg2
    int32_t ebx
    ebx.b = *esi
    
    while (ebx.b != 0)
        int32_t eax_1 = sx.d(ebx.b)
        int32_t var_18_1 = *arg1
        char const* const var_24_2
        uint32_t eax
        
        if (eax_1 == 0x3c)
            int32_t var_1c_2 = 4
            int32_t var_20_2 = 1
            var_24_2 = "&lt;"
        label_52638f:
            eax = _fwrite(var_24_2, 1, 4)
            
            if (eax != 4)
                sub_489550(eax, &data_5b2591, "resultCount == len", 
                    "d:\ax\trunk\ax2017\engine\xmlwriter.cpp", 0x29, "sXmlEmit")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
        else
            if (eax_1 == 0x3e)
                int32_t var_1c_1 = 4
                int32_t var_20_1 = 1
                var_24_2 = "&gt;"
                goto label_52638f
            
            var_8.b = ebx.b
            eax = _fwrite(&var_8, 1, 1)
            
            if (eax != 1)
                sub_489550(eax, &data_5b2591, "resultCount == 1", 
                    "d:\ax\trunk\ax2017\engine\xmlwriter.cpp", 0x31, "sXmlEmitChar")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
        ebx.b = esi[1]
        esi = &esi[1]
}
