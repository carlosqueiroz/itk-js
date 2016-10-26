const path = require('path')
const assert = require('assert')

const itk = require(path.resolve(__dirname, 'dist', 'itk.js'))

const FloatTypesTest = require(path.resolve(__dirname, 'test', 'itkFloatTypesTest.js'))
const ImageTest = require(path.resolve(__dirname, 'test', 'itkImageTest.js'))
const ImageTypeTest = require(path.resolve(__dirname, 'test', 'itkImageTypeTest.js'))
const IntTypesTest = require(path.resolve(__dirname, 'test', 'itkIntTypesTest.js'))
const MatrixTest = require(path.resolve(__dirname, 'test', 'itkMatrixTest.js'))

const readEmscriptenFSFileTest = require(path.resolve(__dirname, 'test', 'itkreadImageEmscriptenFSFileTest.js'))
const readImageFileTest = require(path.resolve(__dirname, 'test', 'itkreadImageFileTest.js'))

describe('Code Style', function () {
  var standard = require('mocha-standard')
  this.timeout(5000)
  it('conforms to standard', standard.files([ 'src/*.js', 'test/*.js' ],
    {
      global: ['describe', 'it', 'before', 'beforeEach', 'after', 'afterEach', 'xdescribe', 'xit']
    }))
})

// var NodeESModuleLoader = require('node-es-module-loader')

// var loader = new NodeESModuleLoader([> optional basePath <])

// loader.import('./ITKBridgeJavaScript/dist/ImageIOs/itkPNGImageIOJSBinding.js').then(function(m) {
// //console.log(m)
// console.log(m.default)
// var imageio = new m.default.itkPNGImageIO()
// console.log(imageio)
// console.log('setting')
// imageio.SetFileName('myfile.png')
// console.log(imageio.GetFileName())
// // ...
// })
