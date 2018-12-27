let linear;

if (process.env.DEBUG) {
    linear = require('./build/Debug/linear.node')
} else {
    linear = require('./build/Release/linear.node')
}

module.exports = linear;