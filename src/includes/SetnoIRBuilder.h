/*
**  Copyright (C) - Triton
**
**  This program is under the terms of the LGPLv3 License.
*/

#ifndef LIGHT_VERSION

#ifndef SETNOIRBUILDER_H
#define SETNOIRBUILDER_H

#include "BaseIRBuilder.h"
#include "EflagsBuilder.h"
#include "Inst.h"
#include "OneOperandTemplate.h"


class SetnoIRBuilder: public BaseIRBuilder, public OneOperandTemplate {

  public:
    SetnoIRBuilder(__uint address, const std::string &disassembly);

    // From BaseIRBuilder
    virtual Inst *process(void) const;

    // From OneOperandTemplate
    virtual void none(Inst &inst) const;

    virtual void reg(Inst &inst) const;

    virtual void imm(Inst &inst) const;

    virtual void mem(Inst &inst) const;
};

#endif // SETNOIRBUILDER_H
#endif // LIGHT_VERSION

