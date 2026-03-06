// 函数名称: sub_4c43b0
// 虚拟地址: 0x4c43b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_4c43b0(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, void* arg5)
{
    // 第一条实际指令: int32_t edi = 0
    int32_t edi = 0
    int32_t var_c = arg2
    
    if (arg4 s> 0)
        void* esi_2 = arg5 + 8
        
        while (true)
            int32_t ecx = *(arg2 + (edi << 2))
            int32_t eax = ecx * 0x32c
            *(esi_2 - 8) = ecx
            *(esi_2 - 4) = 2
            char** edx_2 = arg3 + 0xc + eax
            *esi_2 = edx_2
            char const* const eax_1
            
            switch (ecx)
                case 0
                    eax_1 = "mouse left"
                label_4c450e:
                    edi += 1
                    *edx_2 = eax_1
                    arg2 = var_c
                    esi_2 += 0xc
                    
                    if (edi s>= arg4)
                        break
                    
                    continue
                case 1
                    eax_1 = "mouse right"
                    goto label_4c450e
                case 2
                    eax_1 = "mouse scroll up"
                    goto label_4c450e
                case 3
                    eax_1 = "mouse scroll down"
                    goto label_4c450e
                case 4
                    eax_1 = "keyboard space"
                    goto label_4c450e
                case 5
                    eax_1 = "keyboard enter"
                    goto label_4c450e
                case 6
                    eax_1 = "keyboard esc"
                    goto label_4c450e
                case 7
                    eax_1 = "keyboard tab"
                    goto label_4c450e
                case 8
                    eax_1 = "keyboard left"
                    goto label_4c450e
                case 9
                    eax_1 = "keyboard right"
                    goto label_4c450e
                case 0xa
                    eax_1 = "keyboard up"
                    goto label_4c450e
                case 0xb
                    eax_1 = "keyboard down"
                    goto label_4c450e
                case 0xe
                    eax_1 = "gamepad a"
                    goto label_4c450e
                case 0xf
                    eax_1 = "gamepad b"
                    goto label_4c450e
                case 0x10
                    eax_1 = "gamepad x"
                    goto label_4c450e
                case 0x11
                    eax_1 = "gamepad y"
                    goto label_4c450e
                case 0x12
                    eax_1 = "gamepad back"
                    goto label_4c450e
                case 0x13
                    eax_1 = "gamepad select"
                    goto label_4c450e
                case 0x14
                    eax_1 = "gamepad left dpad"
                    goto label_4c450e
                case 0x15
                    eax_1 = "gamepad left shoulder"
                    goto label_4c450e
                case 0x16
                    eax_1 = "gamepad right dpad"
                    goto label_4c450e
                case 0x17
                    eax_1 = "gamepad right shoulder"
                    goto label_4c450e
                case 0x18
                    eax_1 = "oc remote enter"
                    goto label_4c450e
                case 0x19
                    eax_1 = "oc remote back"
                    goto label_4c450e
                case 0x1a
                    eax_1 = "oc remote up"
                    goto label_4c450e
                case 0x1b
                    eax_1 = "oc remote down"
                    goto label_4c450e
                case 0x1c
                    eax_1 = "oc remote left"
                    goto label_4c450e
                case 0x1d
                    eax_1 = "oc remote right"
                    goto label_4c450e
                case 0x1e
                    eax_1 = "gear remote trigger"
                    goto label_4c450e
                case 0x1f
                    eax_1 = "gear remote touchpad"
                    goto label_4c450e
                case 0x20
                    eax_1 = "gear remote back"
                    goto label_4c450e
                case 0x21
                    eax_1 = "gear touchpad"
                    goto label_4c450e
                case 0x22
                    eax_1 = "gear back"
                    goto label_4c450e
            
            sub_489550(eax, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\controller.cpp", 0xa9, 
                "ClickStateAlloc")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
    
    return arg4
}
