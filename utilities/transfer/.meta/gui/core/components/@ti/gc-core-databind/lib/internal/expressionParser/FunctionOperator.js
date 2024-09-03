/**
 *  Copyright (c) 2020, 2022 Texas Instruments Incorporated
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *  *   Redistributions of source code must retain the above copyright
 *  notice, this list of conditions and the following disclaimer.
 *  notice, this list of conditions and the following disclaimer in the
 *  documentation and/or other materials provided with the distribution.
 *  *   Neither the name of Texas Instruments Incorporated nor the names of
 *  its contributors may be used to endorse or promote products derived
 *  from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 'AS IS'
 *  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 *  THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 *  PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 *  CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 *  EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 *  PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 *  OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 *  WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 *  OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 *  EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
import { AbstractLookupOperator } from './AbstractLookupOperator';
import { AbstractLookupOperatorFactory } from './AbstractLookupOperatorFactory';
const OP = '()';
class Factory extends AbstractLookupOperatorFactory {
    constructor() {
        super(...arguments);
        this.operator = OP;
    }
    createOperator(lookupBinding, indexBinding) {
        // eslint-disable-next-line @typescript-eslint/no-use-before-define
        return new FunctionOperator(lookupBinding, indexBinding);
    }
    parseLiteral(uri, factory) {
        return factory.parseExpression(uri, 0); // reset precedence to look for operators inside parentheses.
    }
}
export class FunctionOperator extends AbstractLookupOperator {
    constructor() {
        super(...arguments);
        this.operator = OP;
    }
}
FunctionOperator.factory = new Factory();
//# sourceMappingURL=FunctionOperator.js.map