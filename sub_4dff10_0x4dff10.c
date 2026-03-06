// 函数名称: sub_4dff10
// 虚拟地址: 0x4dff10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (*sub_4dff10())[0x4]
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t* eax = sub_498440(4)
    eax[3] += 1
    int32_t* ecx_1 = *eax
    
    if (ecx_1 == 0)
        sub_4982d0(eax)
        ecx_1 = *eax
    
    *eax = *ecx_1
    *ecx_1 = 0
    *ecx_1 = &data_609224
    data_1151ae4 = ecx_1
    data_aca1e4 = ecx_1
    void*** eax_2 = operator new(8)
    void*** var_8_1 = eax_2
    data_114e834 = eax_2
    *eax_2 = &data_609558
    eax_2[1] = 0
    int32_t eax_3 = data_114ec74
    uint32_t (* eax_4)[0x4] = eax_3
    
    if (eax_3 != 0)
        void* eax_5 = eax_4 - 1
        char const* const var_1c_1
        int32_t var_18
        char const* const var_14
        char* ecx_3
        
        if (eax_4 != 1)
            void* temp2_1 = eax_5
            eax_5 -= 1
            
            if (temp2_1 != 1)
                var_14 = "WindowsInitInterfaces"
                var_18 = 0x44
                var_1c_1 = "d:\ax\trunk\ax2017\engine\windows\windowsapp.cpp"
                ecx_3 = "Halt"
                goto label_4e0113
            
            int32_t* eax_6 = sub_498440(0x64)
            eax_6[3] += 1
            int32_t* esi_1 = *eax_6
            
            if (esi_1 == 0)
                sub_4982d0(eax_6)
                esi_1 = *eax_6
            
            *eax_6 = *esi_1
            uint32_t (* eax_8)[0x4] = _memset(esi_1, 0, 0x64)
            *esi_1 = &data_60a290
            __builtin_memset(&esi_1[0xe], 0, 0x14)
            esi_1[0x13] = 1
            esi_1[0x14] = 0
            data_1151ae8 = esi_1
            data_114ec78 = esi_1
            return eax_8
        
        bool cond:0_1 = data_1151adc != 0
        data_114ec74 = 1
        
        if (cond:0_1)
            var_14 = "OpenGLInterfaceCreate"
            var_18 = 0x3ed
            var_1c_1 = "d:\ax\trunk\ax2017\engine\openglgraphics.cpp"
            ecx_3 = "!gOpenGLInterface"
        label_4e0113:
            sub_489550(eax_5, &data_5b2591, ecx_3, var_1c_1, var_18, var_14)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t* eax_9 = sub_498440(0x5040)
        eax_9[3] += 1
        void*** esi_2
        
        if (eax_9[4] != 0xffffffff)
            esi_2 = *eax_9
            
            if (esi_2 == 0)
                sub_4982d0(eax_9)
                esi_2 = *eax_9
            
            *eax_9 = *esi_2
            eax_4 = _memset(esi_2, 0, 0x5040)
        else
            esi_2 = sub_4c2e40(0x5040)
            _memset(&esi_2[1], 0, 0x423c)
            eax_4 = _memset(&esi_2[0x1091], 0, 0xdfc)
        
        *esi_2 = &data_60798c
        __builtin_memset(&esi_2[0x1090], 0, 0x14)
        esi_2[0x1095] = 1
        esi_2[0x1096] = 0
        data_1151adc = esi_2
        data_114ec78 = esi_2
    
    return eax_4
}
