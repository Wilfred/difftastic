import FixtureSet from '../../FixtureSet';
import ReorderedInputsTestCase from './ReorderedInputsTestCase';
import OnSelectEventTestCase from './OnSelectEventTestCase';
const React = window.React;

export default function SelectionEvents() {
  return (
    <FixtureSet
      title="Selection Restoration"
      description="selection state before commits and then restoring it afterwards.">
      <ReorderedInputsTestCase />
      <OnSelectEventTestCase />
    </FixtureSet>
  );
}
