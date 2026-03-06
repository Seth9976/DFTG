// 函数名称: sub_550f00
// 虚拟地址: 0x550f00
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_550f00()
{
    // 第一条实际指令: void var_110
    void var_110
    int32_t eax_1 = __security_cookie ^ &var_110
    float xmm0 = data_126786c
    int32_t var_f8 = 0x3f800000
    int32_t var_d8 = 0
    float var_f4 = xmm0
    int32_t ecx
    int32_t var_120 = ecx
    data_11e6054
    float var_fc = (data_1267874 ^ (data_60cca0.o).d) * xmm0
    int128_t var_80 = ((data_1267870 ^ (data_60cca0.o).d) * xmm0).o
    int128_t var_60 = 0.o
    int128_t var_50 = data_60cc20
    int128_t var_40 = data_5d2770
    int32_t var_a4 = 0
    int128_t var_30 = data_60cc20
    int128_t var_70 = zx.o(0)
    void var_98
    int32_t esi
    sub_4cb5d0(esi, &var_98, &data_5d27f8, 0, data_620d84, nullptr, nullptr, nullptr)
    sub_54f4c0()
    int32_t var_118_2
    int32_t eax_2
    int32_t var_108
    int32_t var_104
    int32_t* ecx_2
    
    if (data_11e7060.b != 0 || data_11e7062 != 0)
        sub_489e40(&var_108)
        eax_2 = sub_550430(var_108, var_104)
        PSTR lpCursorName
        char result
        
        if (eax_2 == 0xffffffff)
        label_551108:
            ecx_2 = &var_108
        label_55110c:
            result = sub_489e40(ecx_2)
            
            if (result == 0)
                @__security_check_cookie@4(eax_1 ^ &var_110)
                return result
            
            lpCursorName = 0x7f00
        label_551123:
            result = SetCursor(LoadCursorA(nullptr, lpCursorName))
            @__security_check_cookie@4(eax_1 ^ &var_110)
            return result
        
        if (eax_2 u> 7)
            char const* const var_114_5 = "UIEditorUpdate"
            var_118_2 = 0x45e
        else
            switch (eax_2)
                case 0, 7
                label_55107b:
                    result = sub_489e40(&var_108)
                    
                    if (result == 0)
                        @__security_check_cookie@4(eax_1 ^ &var_110)
                        return result
                    
                    lpCursorName = 0x7f82
                    goto label_551123
                case 1, 6
                label_5510f8:
                    result = sub_489e40(&var_108)
                    
                    if (result == 0)
                        @__security_check_cookie@4(eax_1 ^ &var_110)
                        return result
                    
                    lpCursorName = 0x7f84
                    goto label_551123
                case 2, 5
                label_551096:
                    result = sub_489e40(&var_108)
                    
                    if (result == 0)
                        @__security_check_cookie@4(eax_1 ^ &var_110)
                        return result
                    
                    lpCursorName = 0x7f83
                    goto label_551123
                case 3, 4
                label_5510ae:
                    result = sub_489e40(&var_108)
                    
                    if (result == 0)
                        @__security_check_cookie@4(eax_1 ^ &var_110)
                        return result
                    
                    lpCursorName = 0x7f85
                    goto label_551123
    else
        ecx_2 = &var_108
        
        if (data_11e7060:1.b == 0)
            goto label_55110c
        
        sub_489e40(ecx_2)
        eax_2 = sub_550a50(var_108, var_104)
        
        if (eax_2 == 0xffffffff)
            goto label_551108
        
        if (eax_2 u> 7)
            char const* const var_114_2 = "UIEditorUpdate"
            var_118_2 = 0x484
        else
            switch (eax_2)
                case 0, 7
                    goto label_55107b
                case 1, 6
                    goto label_5510f8
                case 2, 5
                    goto label_551096
                case 3, 4
                    goto label_5510ae
    sub_489550(eax_2, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\editor\uieditor.cpp", var_118_2, 
        "UIEditorUpdate")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
