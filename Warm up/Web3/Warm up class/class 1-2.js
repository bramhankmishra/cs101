const crypto = require('crypto')


function hashingFunc(input) {

    // const hashedData = crypto.createHash('sha256').digest('hex')
    // return hashedData
    let inputnum = '0'
    while (true) {
        let hashedData = crypto.createHash('sha256').update(inputnum).digest('hex')
        if (hashedData.startsWith(input)) {
            return hashedData
        }
        inputnum++
    }
}

 f

const input = "000000"
const crypto_text = hashingFunc(input)
console.log(crypto_text)
